using UnityEngine;

// In this file we have a function to set game values (being name, height of player, gender, which contingency group) 
// either from within in the websocket connection
// Or if we set a boolean, we take default values (for development purposes)
public class SetGameValues : MonoBehaviour
{
    private GameManager gameManager;
    [SerializeField] WsClient wsClient;
    public string playerName = "Pieter";
    public Gender gender = Gender.Male;
    public Contingency contingency = Contingency.c_20;
    public int height = 130;
    public int trial_block = 1; // or 2
    public string NPCNameMale_1 = "Sander";
    public string NPCNameMale_2 = "Henk";
    public string NPCNameFemale_1 = "Tinne";
    public string NPCNameFemale_2 = "Lindsay";
    public string NextTrialBlockNPCname = "";
    [SerializeField] Player player;
    [SerializeField] Player NPC;


    // Start is called before the first frame update
    void Start()
    {
        gameManager = GetComponent<GameManager>();
        wsClient = WsClient.Instance;

        //if (gameManager.isTutorial & !wsClient.playerVals.valuesSet)
        //{
        //    player.playerName = playerName;
        //    player.gender = gender;
        //    player.contingency = contingency;
        //    player.height = height; //TODO USEFUL?
        //    player.isRealPlayer = true;
        //    // we tell the game that the players values are set
        //    gameManager.playerContingencySet = true;
        //    gameManager.playerValuesAreSet = true;
        //}
        //else
        //{
            if (gameManager.developmentMode & !wsClient.playerVals.valuesSet)
            {
                UpdateGameValues();
            }
        //}
        if (wsClient.playerVals.valuesSet)
        {
            gameManager.playerValsReceivedViaWS = true;
        }
    }

    // Update is called once per frame
    void Update()
    {
        if (gameManager.playerValsReceivedViaWS)
        {
            Debug.Log("update received from WS for player vals");
            SetPlayerVals(wsClient.playerVals);
            gameManager.playerValsReceivedViaWS = false;
        }
    }

    public void SetPlayerVals(PlayerVals playerVals)
    {
        playerName = playerVals.name;
        gender = playerVals.gender == "M" ? Gender.Male : Gender.Female;
        contingency = playerVals.contingency == 20 ? Contingency.c_20 : Contingency.c_80;
        height = playerVals.height;
        trial_block = playerVals.trial_block;
        UpdateGameValues();
    }

    public void UpdateGameValues()
    {

        // we set the values for the normal player and the NPC, both should be male
        player.playerName = playerName;
        player.gender = gender;
        player.contingency = contingency;
        player.height = height; //TODO USEFUL?
        player.isRealPlayer = true;
        player.trial_block = trial_block;
        // NPC values
        if (!gameManager.isTutorial)
        {
            if (gender == Gender.Male)
            {
                if (trial_block == 1)
                {
                    NPC.playerName = NPCNameMale_1;
                    NextTrialBlockNPCname = NPCNameMale_2;
                }
                else
                {
                    NPC.playerName = NPCNameMale_2;
                }
            }
            else
            {
                if (trial_block == 1)
                {
                    NPC.playerName = NPCNameFemale_1;
                    NextTrialBlockNPCname = NPCNameFemale_2;
                }
                else
                {
                    NPC.playerName = NPCNameFemale_2;
                }
            }
            NPC.gender = gender;
            NPC.contingency = Contingency.c_20; // DONT CARE
            NPC.height = height; //TODO USEFUL?
            NPC.isRealPlayer = false;
        }

        // we tell the game that the players values are set
        gameManager.playerValuesAreSet = true;
        gameManager.playerContingencySet = true;

    }
}
