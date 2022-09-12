using System;
using UnityEngine;

namespace UberGameware
{
    [CreateAssetMenu(fileName = "newComboStatus", menuName = "UberGameware/ScriptableObjects/ComboStatus")]
    [Serializable]
    public class ComboStatus : ScriptableObject
    {
        private int multiplierUnlockedMax;
        // public int RequiredComboSteps = 5;

        private int currentMultiplier;
        private int currentComboSteps;

        private Action<int> comboStepsUpdateAction;
        private Action<int> multiplierUpdateAction;
        private Action<int> multiplierUnlockedAction;


        public void SetComboStepsUpdateAction(Action<int> comboStepsAction)
        {
            comboStepsUpdateAction = comboStepsAction;
        }

        public void SetMultiplierUpdateAction(Action<int> multiplierAction)
        {
            multiplierUpdateAction = multiplierAction;
        }

        public void SetMultiplierUnlockAction(Action<int> multiplierUnlockAction)
        {
            multiplierUnlockedAction = multiplierUnlockAction;
        }

        public void SetComboSteps(int newComboSteps)
        {
            currentComboSteps = newComboSteps;

            comboStepsUpdateAction(currentComboSteps);
        }

        public void SetMultiplier(int newMultiplier)
        {
            currentMultiplier = newMultiplier;

            multiplierUpdateAction(currentMultiplier);
        }

        public void UnlockMultiplier(int unlockedMultiplier)
        {
            multiplierUnlockedMax = unlockedMultiplier;

            multiplierUnlockedAction(multiplierUnlockedMax);
        }
    }
}
