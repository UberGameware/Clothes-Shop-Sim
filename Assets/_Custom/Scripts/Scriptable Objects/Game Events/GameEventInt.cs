using System.Collections.Generic;
using UnityEngine;

namespace UberGameware
{
    [CreateAssetMenu(fileName = "newGameEventInt", menuName = "UberGameware/ScriptableObjects/GameEventInt", order = 4)]
    public class GameEventInt : ScriptableObject
    {
        /// <summary>
        /// The list of listeners that this event will notify if it is raised.
        /// </summary>
        private readonly List<GameEventListenerInt> eventListeners = new List<GameEventListenerInt>();

        public void Raise(int id)
        {
            for (int i = eventListeners.Count - 1; i >= 0; i--)
            {
                eventListeners[i].OnEventRaised(id);
            }
        }

        public void RegisterListener(GameEventListenerInt listener)
        {
            if (!eventListeners.Contains(listener))
            {
                eventListeners.Add(listener);
            }
        }

        public void UnregisterListener(GameEventListenerInt listener)
        {
            if (eventListeners.Contains(listener))
            {
                eventListeners.Remove(listener);
            }
        }
    }
}
