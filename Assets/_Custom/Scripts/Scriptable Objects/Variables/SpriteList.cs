using System;
using System.Collections;
using System.Collections.Generic;
using JetBrains.Annotations;
using UnityEngine;

namespace UberGameware
{
    [CreateAssetMenu(fileName = "newSpriteList", menuName = "UberGameware/ScriptableObjects/SpriteList")]
    [Serializable]
    public class SpriteList : ScriptableObject
    {
        [UsedImplicitly] [SerializeField] private List<Sprite> elements;

        public List<Sprite> Elements
        {
            get { return elements; }
        }
        public void Add(Sprite element)
        {
            elements.Add(element);
        }
        public void AddRange(List<Sprite> newList)
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
