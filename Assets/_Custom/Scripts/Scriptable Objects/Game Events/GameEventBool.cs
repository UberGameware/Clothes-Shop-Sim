using System.Collections.Generic;
using UnityEngine;

namespace UberGameware
{
    [CreateAssetMenu(fileName = "newGameEventBool", menuName = "UberGameware/ScriptableObjects/GameEventBool", order = 3)]
    public class GameEventBool : ScriptableObject
    {
        /// <summary>
        /// The list of listeners that this event will notify if it is raised.
        /// </summary>
        private readonly List<GameEventListenerBool> eventListeners = new List<GameEventListenerBool>();

        public void Raise(bool state)
        {
            for (int i = eventListeners.Count - 1; i >= 0; i--)
            {
                eventListeners[i].OnEventRaised(state);
            }
        }

        public void RegisterListener(GameEventListenerBool listener)
        {
            if (!eventListeners.Contains(listener))
            {
                eventListeners.Add(listener);
            }
        }

        public void UnregisterListener(GameEventListenerBool listener)
        {
            if (eventListeners.Contains(listener))
            {
                eventListeners.Remove(listener);
            }
        }
    }
}
