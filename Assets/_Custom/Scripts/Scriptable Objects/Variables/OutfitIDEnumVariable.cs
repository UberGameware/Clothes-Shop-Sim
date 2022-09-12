using System;
using UnityEngine;

namespace ClothesShopSim
{
    [CreateAssetMenu(fileName = "newOutfitIDEnumVariable", menuName = "UberGameware/ScriptableObjects/OutfitIDEnumVariable")]
    [Serializable]
    public class OutfitIDEnumVariable : ScriptableObject
    {
        public OutfitID Value;

        public void SetValue(OutfitID value)
        {
            Value = value;
        }

        public void SetValue(OutfitIDEnumVariable value)
        {
            Value = value.Value;
        }
    }
}
