using System.Collections;
using TMPro;
using UnityEngine;

public class CaregiverIntroScoringState : CaregiverIntroStateMachine
{
    private int passthrough = 0;
    private float timer = 0;
    private float switchTextTime = 3.0f;
    public override void EnterState(CaregiverIntroStateManager state)
    {
        state.caregiverPhase = "CaregiverIntroScoringState";
        state.scoreCaregiver.EnableScoring();
        // play audio fragment: "goede score geven"
        passthrough = 0;
        state.feedbackButton.isTouched = false;
        Debug.Log("Geef een lage score");
        state.InstructionBoardAppear.Raise();
        state.InstructionBoardText.text = "We leren je nu hoe je je zorgfiguur een lage score kan geven.";
        foreach (GameObject arrow in state.ArrowPointInside)
        {
            arrow.GetComponent<MeshRenderer>().enabled = false;
        }
        foreach (GameObject arrow in state.ArrowPointOutside)
        {
            arrow.GetComponent<MeshRenderer>().enabled = true;
        }
        // uitgaan van mondelinge instructies eerst?
    }

    public override void ExitState(CaregiverIntroStateManager state)
    {

    }


    public override void UpdateState(CaregiverIntroStateManager state)
    {

        if (state.scoreCaregiver.scoringStarted)
        {
            Debug.Log("passthrough: " + passthrough);
            switch (passthrough)
            {
                case 0:
                    state.scoreCaregiver.scoringStarted = false;
                    Debug.Log("score: " + state.scoreCaregiver.caregiverScore);
                    if (state.scoreCaregiver.caregiverScore <= 2)
                    {
                        // als score goed, passthrough++
                        passthrough++;
                        timer = 0.0f;
                        Debug.Log("Geef maar een Hoge score");
                        state.InstructionBoardText.text = "Perfect, probeer nu eens voor een hoge score ze dicht bijeen te brengen";
                        foreach (GameObject arrow in state.ArrowPointOutside)
                        {
                            arrow.GetComponent<MeshRenderer>().enabled = false;
                        }
                        foreach (GameObject arrow in state.ArrowPointInside)
                        {
                            arrow.GetComponent<MeshRenderer>().enabled = true;
                        }
                    }
                    else
                    {
                        // anders boodschap geven opnieuw te proberen
                        // play audio file: probeer eens opnieuw
                        Debug.Log("te hoge score");
                        state.InstructionBoardText.text = "probeer ze nog verder uiteen te zetten voor een echt slechte score";

                    }
                    state.scoreCaregiver.EnableScoring();

                    break;
                case 1:
                    state.scoreCaregiver.scoringStarted = false;
                    // als score goed, passthrough++
                    // anders boodschap geven opnieuw te proberen
                    if (state.scoreCaregiver.caregiverScore >= 8)
                    {
                        passthrough++;
                        timer = 0.0f;
                        Debug.Log("Geef nu maar echte score");
                        state.InstructionBoardText.text = "Top! Kun je nu zelf aanduiden hoeveel je je zorgfiguur vertrouwt?";
                        foreach (GameObject arrow in state.ArrowPointInside)
                        {
                            arrow.GetComponent<MeshRenderer>().enabled = false;
                        }
                        foreach (GameObject arrow in state.ArrowPointOutside)
                        {
                            arrow.GetComponent<MeshRenderer>().enabled = false;
                        }
                    }
                    else
                    {
                        // play audio file: probeer eens opnieuw
                        Debug.Log("te hoge score" + state.scoreCaregiver.caregiverScore);
                        state.InstructionBoardText.text = "probeer ze nog dichter bijeen te brengen voor een echt goede score";

                    }
                    state.scoreCaregiver.EnableScoring();
                    break;
                case 2:
                    state.scoreCaregiver.scoringStarted = false;
                    state.scoreCaregiver.SendScore(-1);
                    state.InstructionBoardText.text = "Goed gedaan, we gaan het spel nu starten!";

                    state.feedbackButton.RaiseFeedbackPole();
                    // als score goed, feedbackbutton omhoog en naar echte spel
                    break;
                default:
                    break;

            }
        }
        else
        {
            timer += Time.deltaTime;
            switch (passthrough)
            {
                case 0:
                    if (timer >= switchTextTime)
                    {
                        state.InstructionBoardText.text = "Sluit je handen volledig voor de cirkels te kunnen bewegen of ze vast te zetten. ";
                    }
                    if (timer >= 2 * switchTextTime)
                    {
                        state.InstructionBoardText.text = "Voor een slechte score moet je de cirkels ver uiteen brengen.";
                    }
                    break;
                case 1:
                    break;
                case 2:
                    break;
                default:
                    break;
            }
        }
        if (state.feedbackButton.isTouched && passthrough == 2)
        {
            state.SwitchState(state.caregiverIntroEndState);
        }
    }


    private IEnumerator UpdateText(CaregiverIntroStateManager state, string updateText)
    {
        yield return new WaitForSeconds(3.0f);
        state.InstructionBoardText.text = updateText;
        string s = "sluit je hand volledig om de cirkels te activeren en trek ze zo ver mogelijk uit elkaar om een slechte score te geven";
    }
}
/*
 * In this part, we'll have to show three text boxes or three voice messages:
 * - geef haar nu eens een goede score, zorg dat de cirkels ongeveer op elkaar liggen
 * - geef haar nu maar een slechtere score, trek de cirkels uiteen
 * - Nu je het systeem snapt, mag je zelf een score geven, hoe goed vertrouw je je zorgfiguur?
 * 
 * Ik wil dus kijken of de score binnen een bepaalde marge zit voordat we het goed kunnen keuren
 */


