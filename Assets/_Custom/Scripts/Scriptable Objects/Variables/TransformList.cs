using System;
using System.Collections.Generic;
using JetBrains.Annotations;
using UnityEngine;

namespace UberGameware
{
    [CreateAssetMenu(fileName = "newTransformList", menuName = "UberGameware/ScriptableObjects/TransformList")]
    [Serializable]
    public class TransformList : ScriptableObject
    {
        [UsedImplicitly] [SerializeField] private List<Transform> elements;

        public List<Transform> Elements
        {
            get { return elements; }
        }
        public void Add(Transform element)
        {
            elements.Add(element);
        }
        public void AddRange(List<Transform> newList)
        {
            elements.AddRange(newList);
        }
        public int Count()
        {
            return elements.Count;
        }
        public void Clear()
        {
            elements.Clear();
        }
    }
}
