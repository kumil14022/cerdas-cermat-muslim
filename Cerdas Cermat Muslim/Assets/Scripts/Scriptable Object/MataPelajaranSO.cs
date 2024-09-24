using UnityEngine;

[CreateAssetMenu(fileName = "Mata Pelajaran Baru", menuName = "ScriptableObjects/Mata Pelajaran")]
public class MataPelajaranSO : ScriptableObject
{
    public string namaMataPelajaran;
    public LevelSO[] levels;
}

