// 
// Diapasones of codes keys for IRremote lib.
//
// 0xFF0000-0xFF00FF power
// 0xFF0800-0xFF08FF volume-
// 0xFF1000-0xFF10FF balance>
// 0xFF2000-0xFF20FF channel switch
// 0xFF2800-0xFF28FF SU-
// 0xFF3000-0xFF30FF balance<
// 0xFF4000-0xFF40FF mute
// 0xFF5000-0xFF50FF bass+
// 0xFF6000-0xFF60FF 3d
// 0xFF6800-0xFF68FF SU+
// 0xFF7000-0xFF70FF bass-
// 0xFF8800-0xFF88FF volume+
// 0xFF9000-0xFF90FF treble+
// 0xFFB000-0xFFB0FF treble-
//
#define IR_SEND_PIN 4 // In my arduino-uno case default 3-pin does not works. So I use 4-pin.
#include <IRremote.hpp>

IRsend irsend;

void setup() {
}

void loop() {

  long SIG_POWER = 0xFF0000
  long SIG_VOL_DOWN = 0xFF0800
  long SIG_BAL_RIGHT = 0xFF1000
  long SIG_INPUT = 0xFF2000
  long SIG_SUR_DOWN = 0xFF2800
  long SIG_BAL_LEFT = 0xFF3000
  long SIG_MUTE = 0xFF4000
  long SIG_BASS_UP = 0xFF5000
  long SIG_3D = 0xFF6000
  long SIG_SUR_UP = 0xFF6800
  long SIG_BASS_DOWN = 0xFF7000
  long SIG_VOL_UP = 0xFF8800
  long SIG_TREB_UP = 0xFF9000
  long SIG_TREB_DOWN = 0xFFB000

  irsend.sendNECMSB(SIG_POWER, 32);

}
