using UnityEngine;
using UnityEngine.Video;

[System.Serializable]
public class Soal
{
    [Header("Media Soal")]
    public AudioClip soalAudio;   // Input audio soal
    public VideoClip soalVideo;   // Input video soal
    public Sprite soalImage;      // Gambar soal

    [Header("Pertanyaan")]
    [TextArea(3, 10)]
    public string soalText;       // Teks pertanyaan soal

    [Header("Pilihan Jawaban")]
    public string[] pilihan = new string[4]; // Empat pilihan jawaban
    public int jawabanBenarIndex;            // Index jawaban benar (0-3)

    [Header("Sumber Referensi")]
    [TextArea(3, 10)]
    public string sumber;
}

[CreateAssetMenu(fileName = "Soal Baru", menuName = "ScriptableObjects/Soal", order = 2)]
public class SoalSO : ScriptableObject
{
    public Soal soal;
}
