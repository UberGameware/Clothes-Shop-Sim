using System;
using JetBrains.Annotations;
using UnityEngine;

namespace UberGameware
{
    [CreateAssetMenu(fileName = "newTransformArray", menuName = "UberGameware/ScriptableObjects/TransformArray")]
    [Serializable]
    public class TransformArray : ScriptableObject
    {
        [UsedImplicitly] [SerializeField] private Transform[] transforms;

        public Transform[] Transforms
        {
            get { return transforms; }
        }
    }
}
