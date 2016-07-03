/*
* Global method definitions, that are used firmware-wide
*/

void drawMessage(char*);
void firstStart();
void startAltClockline(bool sdStart = false);
void endAltClockline();
bool tempLimits();
float calFunction(uint16_t rawValue);
void createThermalImg(bool menu = false);
void floatToChar(char* buffer, float val);
void showSpot();
void showColorBar();
void settingsMenu();
void timeMenu(bool firstStart = false);
void dateMenu(bool firstStart = false);
void limitValues();
void timeAndDateMenu(bool firstStart = false);
void saveRawData(bool image, char* name, uint16_t framesCaptured = 0);
void proccessVideoFrames(uint16_t framesCaptured, char* dirname);
void createVideoFolder(char* dirname);
void buttonIRQ();
void touchIRQ();
void boxFilter();
void gaussianFilter();
void convertColors();
void scaleValues();
void bootScreen();
void storageMenu();
void checkWarmup();
float bytesToFloat(uint8_t* farray);
float celciusToFahrenheit(float Tc);
void frameFilename(char* filename, uint16_t count);
void liveMode();
void loadThermal();
void loadRawData(char* filename, char* dirname = NULL);
void settingsMenuHandler();
void saveDisplayImage(char* filename, char* dirname = NULL);
uint16_t getVideoFrameNumber(char* dirname);
bool checkSDCard();
void getTemperatures();
void liveModeHelper();
void selectColorScheme();
void changeColorScheme(byte* pos);
void calibrationProcess();
void clearTemperatures();
void tempPointFunction(bool remove = false);
void showTemperatures();
void mainMenu();
bool calibrate();
void changeDisplayOptions(byte* pos);
void displayInfos();
void detachInterrupts();
void attachInterrupts();
void limitLock();
void showMsg(char* msg, bool bottom = false);
void createJPGFile(char* filename, char* dirname = NULL);
void floatToBytes(uint8_t* farray, float val);
bool extButtonPressed();
void disableScreenLight();
void enableScreenLight();
void refreshTempPoints();
void displayMenu();
void adjustCam();
void showDiagnostic();
void setDiagnostic(byte device);
bool checkDiagnostic(byte device);
void createVisualImg();
void createCombinedImg();
void showImage();
void compensateCalib();
void checkImageSave();
void createSDName(char* filename, bool folder = false);
void toggleLaser();