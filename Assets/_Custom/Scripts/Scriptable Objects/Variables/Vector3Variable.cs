using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace UberGameware
{
    [CreateAssetMenu(fileName = "newVector3Variable", menuName = "UberGameware/ScriptableObjects/Vector3Variable")]
    [Serializable]
    public class Vector3Variable : ScriptableObject
    {
        public Vector3 Value;

        public void SetValue(Vector3 value)
        {
            Value = value;
        }

        public void SetValue(Vector3Variable value)
        {
            Value = value.Value;
        }

        public void ApplyChange(Vector3 amount)
        {
            Value += amount;
        }

        public void ApplyChange(Vector3Variable amount)
        {
            Value += amount.Value;
        }
    }
}
