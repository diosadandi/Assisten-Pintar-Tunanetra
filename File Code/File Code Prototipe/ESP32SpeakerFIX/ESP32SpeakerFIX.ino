#include "Audio.h"
#include "SD.h"
#include "FS.h"
#include <WiFi.h>
#include <HTTPClient.h>

// Digital I/O used
#define SD_CS          5
#define SPI_MOSI      23
#define SPI_MISO      19
#define SPI_SCK       18
#define I2S_DOUT      25
#define I2S_BCLK      27
#define I2S_LRC       26

Audio audio;

String input = "";

void setup(){
    pinMode(SD_CS, OUTPUT);
    digitalWrite(SD_CS, HIGH);
    SPI.begin(SPI_SCK, SPI_MISO, SPI_MOSI);
    Serial.begin(115200);
    SD.begin(SD_CS);
    audio.setPinout(I2S_BCLK, I2S_LRC, I2S_DOUT);
    audio.setVolume(17); // 0...21
}   

void loop(){
  if(Serial.available()){
    String input = Serial.readString();
    input.trim();

    if(input == "mobil"){
      audio.connecttoFS(SD, "mobil.wav");
    }
    else if(input == "kursi"){
      audio.connecttoFS(SD, "kursi.wav");
    }
    else if(input == "meja"){
      audio.connecttoFS(SD, "meja.wav");
    }
    else if(input == "pohon"){
      audio.connecttoFS(SD, "pohon.wav");
    }
    else if(input == "anjing"){
      audio.connecttoFS(SD, "anjing.wav");
    }
    else if(input == "apel"){
      audio.connecttoFS(SD, "apel.wav");
    }
    else if(input == "bangku"){
      audio.connecttoFS(SD, "bangku.wav");
    }
    else if(input == "beruang"){
      audio.connecttoFS(SD, "beruang.wav");
    }
    else if(input == "bis"){
      audio.connecttoFS(SD, "bis.wav");
    }
    else if(input == "bola"){
      audio.connecttoFS(SD, "bola.wav");
    }
    else if(input == "boneka teddy bear"){
      audio.connecttoFS(SD, "boneka teddy bear.wav");
    }
    else if(input == "botol"){
      audio.connecttoFS(SD, "botol.wav");
    }
    else if(input == "brokoli"){
      audio.connecttoFS(SD, "brokoli.wav");
    }
    else if(input == "buku"){
      audio.connecttoFS(SD, "buku.wav");
    }
    else if(input == "burung"){
      audio.connecttoFS(SD, "burung.wav");
    }
    else if(input == "cangkir"){
      audio.connecttoFS(SD, "cangkir.wav");
    }
    else if(input == "dasi"){
      audio.connecttoFS(SD, "dasi.wav");
    }
    else if(input == "domba"){
      audio.connecttoFS(SD, "domba.wav");
    }
    else if(input == "fire hydrant"){
      audio.connecttoFS(SD, "fire hydrant.wav");
    }
    else if(input == "frisbee"){
      audio.connecttoFS(SD, "frisbee.wav");
    }
    else if(input == "gajah"){
      audio.connecttoFS(SD, "gajah.wav");
    }
    else if(input == "garpu"){
      audio.connecttoFS(SD, "garpu.wav");
    }
    else if(input == "gelas mabuk"){
      audio.connecttoFS(SD, "gelas mabuk.wav");
    }
    else if(input == "gelombang pendek"){
      audio.connecttoFS(SD, "gelombang pendek.wav");
    }
    else if(input == "gunting"){
      audio.connecttoFS(SD, "gunting.wav");
    }
    else if(input == "hotdog"){
      audio.connecttoFS(SD, "hotdog.wav");
    }
    else if(input == "hp"){
      audio.connecttoFS(SD, "hp.wav");
    }
    else if(input == "jam"){
      audio.connecttoFS(SD, "jam.wav");
    }
    else if(input == "jerapah"){
      audio.connecttoFS(SD, "jerapah.wav");
    }
    else if(input == "jeruk"){
      audio.connecttoFS(SD, "jeruk.wav");
    }
    
    else if(input == "kasur"){
      audio.connecttoFS(SD, "kasur.wav");
    }
    else if(input == "kereta"){
      audio.connecttoFS(SD, "kereta.wav");
    }
    else if(input == "koper"){
      audio.connecttoFS(SD, "koper.wav");
    }
    else if(input == "kucing"){
      audio.connecttoFS(SD, "kucing.wav");
    }
    else if(input == "kue"){
      audio.connecttoFS(SD, "kue.wav");
    }
    else if(input == "kulkas"){
      audio.connecttoFS(SD, "kulkas.wav");
    }
    else if(input == "kursi"){
      audio.connecttoFS(SD, "kursi.wav");
    }
    else if(input == "lalin"){
      audio.connecttoFS(SD, "lalin.wav");
    }
    else if(input == "laptop"){
      audio.connecttoFS(SD, "laptop.wav");
    }
    else if(input == "layangan"){
      audio.connecttoFS(SD, "layangan.wav");
    }
    else if(input == "mangkok"){
      audio.connecttoFS(SD, "mangkok.wav");
    }
    else if(input == "meja makan"){
      audio.connecttoFS(SD, "meja makan.wav");
    }
    else if(input == "meteran parkiran"){
      audio.connecttoFS(SD, "meteran parkiran.wav");
    }
    else if(input == "motor"){
      audio.connecttoFS(SD, "motor.wav");
    }
    else if(input == "mouse"){
      audio.connecttoFS(SD, "mouse.wav");
    }
    else if(input == "orang"){
      audio.connecttoFS(SD, "orang.wav");
    }
    else if(input == "oven"){
      audio.connecttoFS(SD, "oven.wav");
    }
    else if(input == "panggangan roti"){
      audio.connecttoFS(SD, "panggangan roti.wav");
    }
    else if(input == "papan seluncur air"){
      audio.connecttoFS(SD, "papan seluncur air.wav");
    }
    else if(input == "papan seluncur es"){
      audio.connecttoFS(SD, "papan seluncur es.wav");
    }
    else if(input == "papan seluncur"){
      audio.connecttoFS(SD, "papan seluncur.wav");
    }
    else if(input == "payung"){
      audio.connecttoFS(SD, "payung.wav");
    }
    else if(input == "pemukul baseball"){
      audio.connecttoFS(SD, "pemukul baseball.wav");
    }
    else if(input == "pengering rambut"){
      audio.connecttoFS(SD, "pengering rambut.wav");
    }
    else if(input == "perahu"){
      audio.connecttoFS(SD, "perahu.wav");
    }
    else if(input == "pesawat"){
      audio.connecttoFS(SD, "pesawat.wav");
    }
    else if(input == "pisang"){
      audio.connecttoFS(SD, "pisang.wav");
    }
    else if(input == "pizza"){
      audio.connecttoFS(SD, "pizza.wav");
    }
    else if(input == "raket tenis"){
      audio.connecttoFS(SD, "raket tenis.wav");
    }
    else if(input == "ransel"){
      audio.connecttoFS(SD, "ransel.wav");
    }
    else if(input == "remote"){
      audio.connecttoFS(SD, "remote.wav");
    }
    else if(input == "roti isi"){
      audio.connecttoFS(SD, "roti isi.wav");
    }
    else if(input == "sapi"){
      audio.connecttoFS(SD, "sapi.wav");
    }
    else if(input == "sarung tangan baseball"){
      audio.connecttoFS(SD, "sarung tangan baseball.wav");
    }
    else if(input == "sendok"){
      audio.connecttoFS(SD, "sendok.wav");
    }
    else if(input == "sepeda"){
      audio.connecttoFS(SD, "sepeda.wav");
    }
    else if(input == "sikat gigi"){
      audio.connecttoFS(SD, "sikat gigi.wav");
    }
    else if(input == "ski"){
      audio.connecttoFS(SD, "ski.wav");
    }
    else if(input == "sofa"){
      audio.connecttoFS(SD, "sofa.wav");
    }
    else if(input == "tanaman pot"){
      audio.connecttoFS(SD, "tanaman pot.wav");
    }
    else if(input == "tanda berhenti"){
      audio.connecttoFS(SD, "tanda berhenti.wav");
    }
    else if(input == "tas tangan"){
      audio.connecttoFS(SD, "tas tangan.wav");
    }
    else if(input == "toilet"){
      audio.connecttoFS(SD, "toilet.wav");
    }
    else if(input == "truk"){
      audio.connecttoFS(SD, "truk.wav");
    }
    else if(input == "tv"){
      audio.connecttoFS(SD, "tv.wav");
    }
    else if(input == "vas bunga"){
      audio.connecttoFS(SD, "vas bunga.wav");
    }
    else if(input == "westafel"){
      audio.connecttoFS(SD, "westafel.wav");
    }
    else if(input == "wortel"){
      audio.connecttoFS(SD, "wortel.wav");
    }
    else if(input == "zebra"){
      audio.connecttoFS(SD, "zebra.wav");
    }
  }
  
  audio.loop();
}

// optional
void audio_info(const char *info){
    Serial.print("info        "); Serial.println(info);
}
void audio_id3data(const char *info){  //id3 metadata
    Serial.print("id3data     ");Serial.println(info);
}
void audio_eof_mp3(const char *info){  //end of file
    Serial.print("eof_mp3     ");Serial.println(info);
}
void audio_showstation(const char *info){
    Serial.print("station     ");Serial.println(info);
}
void audio_showstreaminfo(const char *info){
    Serial.print("streaminfo  ");Serial.println(info);
}
void audio_showstreamtitle(const char *info){
    Serial.print("streamtitle ");Serial.println(info);
}
void audio_bitrate(const char *info){
    Serial.print("bitrate     ");Serial.println(info);
}
void audio_commercial(const char *info){  //duration in sec
    Serial.print("commercial  ");Serial.println(info);
}
void audio_icyurl(const char *info){  //homepage
    Serial.print("icyurl      ");Serial.println(info);
}
void audio_lasthost(const char *info){  //stream URL played
    Serial.print("lasthost    ");Serial.println(info);
}
void audio_eof_speech(const char *info){
    Serial.print("eof_speech  ");Serial.println(info);
}
