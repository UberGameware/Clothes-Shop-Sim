using System;
using System.Collections.Generic;
using UnityEngine;

namespace UberGameware
{
    [CreateAssetMenu(fileName = "newLevelRequirements", menuName = "UberGameware/ScriptableObjects/LevelRequirements")]
    [Serializable]
    public class LevelRequirements : ScriptableObject
    {
        //TODO: Consider making these available in the Inspector, f9or manually setting and testing
        private double targetValue;
        private int valueTypesQuantity;
        private int additionalTypesQuantity;
        private List<int> valueQuantityToSpawnPerType = new List<int>();
        // private List<int> additionalQuantityToSpawnPerType = new List<int>(); N/A - they;ll be spawned randomly
        private List<double> pricePerValueType = new List<double>();
        private int additionalItemsQuantity;  //The number of Gems without Value (Selected randomly)
        private float speedMultiplier; //The Common Multiplier of the Base Speed and Belt UV scrolling, to keep them in sync
        private float spawnInterval;
        private int quantityPerSet;

        private const int ValueTypesQuantityMin = 2;
        private const int ValueTypesQuantityMax = 7;
        private const int AdditionalTypesQuantityMin = 1;
        private const int AdditionalTypesQuantityMax = 30;


        //TODO: Make all Readonly properties read/write, so that All Set methods are included inside the property

        public int ValueTypesQuantity
        {
            get { return valueTypesQuantity; }
        }

        public int AdditionalTypesQuantity
        {
            get { return additionalTypesQuantity; }
        }

        public List<int> ValueQuantityToSpawnPerType
        {
            get { return valueQuantityToSpawnPerType; }
        }

        // public List<int> AdditionalQuantityToSpawnPerType
        // {
        //     get { return additionalQuantityToSpawnPerType; }
        // }

        public List<double> PricePerValueType
        {
            get { return pricePerValueType; }
        }

        public double TargetValue
        {
            get { return targetValue; }
        }

        public int AdditionalItemsQuantity
        {
            get { return additionalItemsQuantity; }
        }

        public float SpeedMultiplier
        {
            get { return speedMultiplier; }
        }

        public float SpawnInterval
        {
            get { return spawnInterval; }
        }

        public int QuantityPerSet
        {
            get { return quantityPerSet; }
        }

        public void SetValueTypesQuantity(int typesQuantity)
        {
            if (typesQuantity >= ValueTypesQuantityMin && typesQuantity <= ValueTypesQuantityMax)
            {
                valueTypesQuantity = typesQuantity;
            }
            else
            {
                Debug.LogError(name + ": Invalid Value Types Quantity: " + typesQuantity);
            }
        }

        public void SetAdditionalTypesQuantity(int typesQuantity)
        {
            if (typesQuantity >= AdditionalTypesQuantityMin && typesQuantity <= AdditionalTypesQuantityMax)
            {
                additionalTypesQuantity = typesQuantity;
            }
            else
            {
                Debug.LogError(name + ": Invalid Additional Types Quantity: " + typesQuantity);
            }
        }

        public void SetTargetValue(double targetValue)
        {
            if (targetValue > 0 && targetValue <= double.MaxValue)
            {
                this.targetValue = targetValue;
            }
        }

        //Note must be called AFTER setting ValueTypesQuantity!!!
        public void SetValueQuantityToSpawnPerType(List<int> quantities)
        {
            if (quantities.Count == valueTypesQuantity)
            {
                valueQuantityToSpawnPerType.Clear();

                valueQuantityToSpawnPerType.AddRange(quantities);
            }
            else
            {
                Debug.LogError(name + ": Invalid number of Value Quantities: " + quantities.Count);
            }
        }

        //Note must be called AFTER setting ValueTypesQuantity and SetTargetValue!!!
        public void SetPricePerValueType(List<double> prices)
        {
            if (prices.Count == valueTypesQuantity)
            {
                pricePerValueType.Clear();

                pricePerValueType.AddRange(prices);
            }
            else
            {
                Debug.LogError(name + ": Invalid number of Value Prices: " + prices.Count);
            }
        }

        public void SetAdditionalItemsQuantity(int quantity)
        {
            if (quantity > 0)
            {
                additionalItemsQuantity = quantity;
            }
        }

        public void SetSpeedMultiplier(float speed)
        {
            if (speed > 0)
            {
                speedMultiplier = speed;
            }
        }

        public void SetSpawnInterval(float interval)
        {
            spawnInterval = interval;
        }

        public void SetQuantityPerSet(int quantity)
        {
            if (quantity > 0 && quantity <=5)
            {
                quantityPerSet = quantity;
            }
        }
    }
}
