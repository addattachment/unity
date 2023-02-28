using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using UnityEngine;
using UnityEngine.UI;

class DebugPlayerReachTarget : MonoBehaviour
{
    [Header("toggle for reach of slingshot")]
    [SerializeField] Toggle toggleMayPlayer;
    [SerializeField] Toggle toggleMustPlayer;
    [SerializeField] Toggle toggleMusntPlayer;
    [SerializeField] Toggle toggleMayNPC;
    [SerializeField] Toggle toggleMustNPC;
    [SerializeField] Toggle toggleMusntNPC;
    [SerializeField] Player Player;
    [SerializeField] Player NPC;
    public void SetToggleReach(ReachTargetEnum reach, Player activeP)
    {
        if (activeP == Player)
        {
            switch (reach)
            {
                case ReachTargetEnum.may:
                    toggleMayPlayer.isOn = true;
                    break;
                case ReachTargetEnum.must:
                    toggleMustPlayer.isOn = true;
                    break;
                case ReachTargetEnum.musnt:
                    toggleMusntPlayer.isOn = true;
                    break;
                default:
                    break;
            }
        }
        else
        {
            switch (reach)
            {
                case ReachTargetEnum.mayNPC:
                    toggleMayNPC.isOn = true;
                    break;
                case ReachTargetEnum.must:
                    toggleMustNPC.isOn = true;
                    break;
                case ReachTargetEnum.musnt:
                    toggleMusntNPC.isOn = true;
                    break;
                default:
                    break;
            }
        }
    }
}

