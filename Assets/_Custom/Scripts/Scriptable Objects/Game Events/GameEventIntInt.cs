using System.Collections.Generic;
using UnityEngine;

namespace UberGameware
{
    [CreateAssetMenu(fileName = "newGameEventIntInt", menuName = "UberGameware/ScriptableObjects/GameEventIntInt", order = 5)]
    public class GameEventIntInt : ScriptableObject
    {
        /// <summary>
        /// The list of listeners that this event will notify if it is raised.
        /// </summary>
        private readonly List<GameEventListenerIntInt> eventListeners = new List<GameEventListenerIntInt>();

        public void Raise(int id1, int id2)
        {
            for (int i = eventListeners.Count - 1; i >= 0; i--)
            {
                eventListeners[i].OnEventRaised(id1, id2);
            }
        }

        public void RegisterListener(GameEventListenerIntInt listener)
        {
            if (!eventListeners.Contains(listener))
            {
                eventListeners.Add(listener);
            }
        }

        public void UnregisterListener(GameEventListenerIntInt listener)
        {
            if (eventListeners.Contains(listener))
            {
                eventListeners.Remove(listener);
            }
        }
    }
}
