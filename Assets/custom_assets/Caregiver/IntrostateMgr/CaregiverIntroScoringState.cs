using UnityEngine;

public class CaregiverIntroScoringState : CaregiverIntroStateMachine
{
    private int passthrough = 0;
    public override void EnterState(CaregiverIntroStateManager state)
    {
        state.caregiverPhase = "CaregiverIntroScoringState";
        state.scoreCaregiver.EnableScoring();
        // play audio fragment: "goede score geven"
    }

    public override void ExitState(CaregiverIntroStateManager state)
    {

    }


    public override void UpdateState(CaregiverIntroStateManager state)
    {
        if (state.scoreCaregiver.scoringStarted)
        {
            switch (passthrough)
            {
                case 0:
                    state.scoreCaregiver.scoringStarted = false;
                    // als score goed, passthrough++
                    if (state.scoreCaregiver.caregiverScore >= 8)
                    {
                        passthrough++;
                        state.scoreCaregiver.EnableScoring();
                    }
                    else
                    {
                        // play audio file: probeer eens opnieuw
                        Debug.Log("te lage score");
                    }
                    // anders boodschap geven opnieuw te proberen
                    break;
                case 1:
                    state.scoreCaregiver.scoringStarted = false;
                    // als score goed, passthrough++
                    // anders boodschap geven opnieuw te proberen
                    if(state.scoreCaregiver.caregiverScore <= 2)
                    {
                        passthrough++;
                        state.scoreCaregiver.EnableScoring();

                    }
                    else
                    {
                        // play audio file: probeer eens opnieuw
                    }
                    break;
                case 2:
                    state.scoreCaregiver.scoringStarted = false;
                    state.scoreCaregiver.SendScore(-1);
                    state.feedbackButton.RaiseFeedbackPole();
                    // als score goed, feedbackbutton omhoog en naar echte spel
                    break;
                default:
                    break;

            }


        }
        if (state.feedbackButton.isTouched)
        {
            state.SwitchState(state.caregiverIntroEndState);
        }

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

