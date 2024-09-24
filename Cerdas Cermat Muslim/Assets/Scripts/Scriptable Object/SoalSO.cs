using UnityEngine;

[System.Serializable]
public class Soal
{
    [TextArea(3, 10)]
    public string soalText;
    public string[] pilihan = new string[4];
    public int jawabanBenarIndex;  // Index jawaban yang benar (0-3)
}

[CreateAssetMenu(fileName = "Soal Baru", menuName = "ScriptableObjects/Soal", order = 2)]
public class SoalSO : ScriptableObject
{
    public Soal soal;
}
