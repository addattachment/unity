using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// In this file we have a function to set game values (being name, height of player, gender, which contingency group) 
// either from within in the websocket connection
// Or if we set a boolean, we take default values (for development purposes)
public class SetGameValues : MonoBehaviour
{
    [SerializeField] private bool isDevelopmentMode = true;
    private GameManager gameManager;
    public string playerName = "Pieter";
    public Gender gender = Gender.Male;
    public Contingency contingency = Contingency.c_20;
    public int height = 130;

    public string NPCNameMale = "Sander";
    public string NPCNameFemale = "Tinne";

    [SerializeField] Player player;
    [SerializeField] Player NPC;

    
    // Start is called before the first frame update
    void Start()
    {
        gameManager = GetComponent<GameManager>();
        if (gameManager.isTutorial)
        {
            player.playerName = playerName;
            player.gender = gender;
            player.contingency = contingency;
            player.height = height; //TODO USEFUL?
            player.isRealPlayer = true;
            // we tell the game that the players values are set
            gameManager.playerSettingsAreSet = true;
        }
        else
        {
            if (isDevelopmentMode)
            {
                UpdateGameValues();
            }
        }
        // else we wait for the websocket client to 1. set the values 2. call the updategamevalues
        // TODO : websocket.HandleIncomingMessage
    }

    // Update is called once per frame
    void Update()
    {

    }

    public void UpdateGameValues()
    {
        if(gender == Gender.Male)
        {
            NPC.playerName = NPCNameMale;
        }
        else
        {
            NPC.playerName = NPCNameFemale;
        }
        // we set the values for the normal player and the NPC, both should be male
        player.playerName = playerName;
        player.gender = gender;
        player.contingency = contingency;
        player.height = height; //TODO USEFUL?
        player.isRealPlayer = true;
        // NPC values
        NPC.gender = gender;
        NPC.contingency = Contingency.c_20; // DONT CARE
        NPC.height = height; //TODO USEFUL?
        NPC.isRealPlayer = false;

        
        // we tell the game that the players values are set
        gameManager.playerSettingsAreSet = true;
    }
}
