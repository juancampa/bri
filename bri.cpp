#include <fstream>

int main(int argc, char *argv[]) {
    // double bri = atof(argv[1]);
    std::ofstream file;
    file.open ("/sys/class/backlight/nv_backlight/brightness");
    file << argv[1] << std::endl;
    file.close();
    return 0;
}
