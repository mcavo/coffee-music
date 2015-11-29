int main(void) {
 FILE * music = wavfile_open("music.wav");
int a = 0;
char* la = "GCGC";
wavfile_write_music( music, "AA#BCC#");
 wavfile_close(music); 
 return 0;
}
