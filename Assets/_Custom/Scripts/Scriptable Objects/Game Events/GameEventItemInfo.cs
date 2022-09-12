using System.Collections.Generic;
using UnityEngine;

namespace ClothesShopSim
{
    [CreateAssetMenu(fileName = "newGameEventItemInfo", menuName = "UberGameware/ScriptableObjects/GameEventItemInfo", order = 5)]
    public class GameEventItemInfo : ScriptableObject
    {
        /// <summary>
        /// The list of listeners that this event will notify if it is raised.
        /// </summary>
        private readonly List<GameEventListenerItemInfo> eventListeners = new List<GameEventListenerItemInfo>();

        public void Raise(ItemInfo itemInfo)
        {
            for (int i = eventListeners.Count - 1; i >= 0; i--)
            {
                eventListeners[i].OnEventRaised(itemInfo);
            }
        }

        public void RegisterListener(GameEventListenerItemInfo listener)
        {
            if (!eventListeners.Contains(listener))
            {
                eventListeners.Add(listener);
            }
        }

        public void UnregisterListener(GameEventListenerItemInfo listener)
        {
            if (eventListeners.Contains(listener))
            {
                eventListeners.Remove(listener);
            }
        }
    }
}
