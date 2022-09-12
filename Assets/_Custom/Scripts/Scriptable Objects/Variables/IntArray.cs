using System;
using System.Collections;
using System.Collections.Generic;
using JetBrains.Annotations;
using UnityEngine;

namespace UberGameware
{
    [CreateAssetMenu(fileName = "newIntArray", menuName = "UberGameware/ScriptableObjects/IntArray")]
    [Serializable]
    public class IntArray : ScriptableObject
    {
        [UsedImplicitly] [SerializeField] private int[] elements;

        private int lastIndex;
        public int[] Elements
        {
            get { return elements; }
        }

        public void Initialize(int size)
        {
            elements = new int[size];
        }

        // public void Add(int element)
        // {
        //     lastIndex = elements.GetUpperBound(0);
        //
        //     elements[lastIndex + 1] = element;
        // }
        public int Count()
        {
            return elements.Length;
        }
        public void Clear()
        {
            Array.Clear(elements, 0, elements.Length);
        }
    }
}
