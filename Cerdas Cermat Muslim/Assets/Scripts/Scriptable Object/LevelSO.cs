using UnityEngine;

[CreateAssetMenu(fileName = "Level Baru", menuName = "ScriptableObjects/Level", order = 1)]
public class LevelSO : ScriptableObject
{
    public int levelTo;
    public SoalSO[] soals;
}