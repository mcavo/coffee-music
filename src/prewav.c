int main(void) {
 FILE * music = wavfile_open("music.wav");
int a = 0;
char* la = "GGGCGGGGCCCGFFCCGC";
wavfile_write_music( music, la);
 wavfile_close(music); 
 return 0;
}
