﻿using System;
using System.Collections;
 
using UnityEngine;
using UnityEngine.SceneManagement; 
 
namespace Com.MyCompany.MyGame
{
    public class GameManager : Photon.PunBehaviour {
 
        #region Photon Messages
 
        /// <summary>
        /// Called when the local player left the room. We need to load the launcher scene.
        /// </summary>
        public void OnLeftRoom()
        {
            SceneManager.LoadScene(0);
        }
 
        #endregion
 
        #region Public Methods
 
        public void LeaveRoom()
        {
            PhotonNetwork.LeaveRoom();
        }
 
        #endregion  
        
        
        #region Private Methods
 
        void LoadArena()
        {
            if ( ! PhotonNetwork.isMasterClient ) 
            {
                Debug.LogError( "PhotonNetwork : Trying to Load a level but we are not the master Client" );
            }
            Debug.Log( "PhotonNetwork : Loading Level : " + PhotonNetwork.room.playerCount );
            PhotonNetwork.LoadLevel("Room for "+PhotonNetwork.room.playerCount);
        }
        
        #endregion
    }
}