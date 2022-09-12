using System;
using UnityEngine;

namespace UberGameware
{
[CreateAssetMenu(fileName = "newLevelStats", menuName = "UberGameware/ScriptableObjects/LevelStats")]
[Serializable]
public class LevelStats : ScriptableObject
{
    public int LevelDisplayed = 0; // Level Displayed
    public int CurrentLevel = 0;
    public int LivesLeft = 0;
    public double TotalValueAvailable = 0d;
    public double LevelValueCollected = 0d;
    public float LevelProportionCompleted = 0;

    private const string LevelDisplayedKey = "LevelDisplayed";
    private const string TotalValueAvailableKey = "TotalValueAvailable";


    void Reset()
    {
        LevelDisplayed = 0;
        CurrentLevel = 0;
        LivesLeft = 0;
        TotalValueAvailable = 0d;
        LevelValueCollected = 0d;
        LevelProportionCompleted = 0f;

        //Also, Reset relative PlayerPrefs entries
        if (PlayerPrefs.HasKey(LevelDisplayedKey))
        {
            PlayerPrefs.DeleteKey(LevelDisplayedKey);
            // PlayerPrefs.SetInt(LevelDisplayedKey, LevelDisplayed);
        }

        if (PlayerPrefs.HasKey(TotalValueAvailableKey))
        {
            PlayerPrefs.DeleteKey(TotalValueAvailableKey);
            // PlayerPrefs.SetString(TotalValueAvailableKey, "0");
        }
    }

}
}
