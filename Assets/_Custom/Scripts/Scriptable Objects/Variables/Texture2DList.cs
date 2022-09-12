using System;
using System.Collections.Generic;
using JetBrains.Annotations;
using UnityEngine;

namespace UberGameware
{
    [CreateAssetMenu(fileName = "newTexture2DList", menuName = "UberGameware/ScriptableObjects/Texture2DList")]
    [Serializable]
    public class Texture2DList : ScriptableObject
    {
        [UsedImplicitly] [SerializeField] private List<Texture2D> elements;

        public List<Texture2D> Elements
        {
            get { return elements; }
        }
        public void Add(Texture2D element)
        {
            elements.Add(element);
        }
        public void AddRange(List<Texture2D> newList)
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
