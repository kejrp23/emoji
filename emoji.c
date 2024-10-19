//created by Jason R. Pittman 10/19/24

#include <stdio.h>
#include <string.h>

// Define a typedef for the struct to hold all emoji strings
typedef struct {
    char smiley[5];
    char crying[5];
    char lol[5];
    char skull[5];
    char facepalm[5];
    char mind_blown[5];
    char frown[5];
    char sunglass_smile[5];
    char zipper_mouth[5];
    char drool_face[5];
    char sleeping_face[5];
    char puke_face[5];
    char angry_face[5];
    char bull_shit_face[5];
    char poop_face[5];
    char heart[5];            // New emoji
    char fire[5];             // New emoji
    char thumbs_up[5];        // New emoji
    char clap[5];             // New emoji
    char party_face[5];       // New emoji
    char thinking_face[5];    // New emoji
    char heart_eyes[5];       // New emoji
    char check_mark[5];       // New emoji
    char sad_face[5];         // New emoji
    char winking_face[5];     // New emoji
    char nerd_face[5];        // New emoji
    char scream_face[5];      // New emoji
    char pensive_face[5];     // New emoji
    char worried_face[5];     // New emoji
    char face_with_stuck_out_tongue[5]; // New emoji
    char relieved_face[5];    // New emoji
    char smiling_face_with_halo[5]; // New emoji
    char confounded_face[5];  // New emoji
    char anguished_face[5];   // New emoji
    char sleepy_face[5];      // New emoji
    char sneezing_face[5];    // New emoji
    char party_popper[5];     // New emoji
    char rainbow[5];          // New emoji
    char sun[5];              // New emoji
    char cloud[5];            // New emoji
    char snowflake[5];        // New emoji
    char trophy[5];           // New emoji
    char light_bulb[5];       // New emoji
    char alarm_clock[5];      // New emoji
    char envelope[5];         // New emoji
    char balloon[5];          // New emoji
    char gift[5];             // New emoji
    char thumbs_down[5];      // New emoji
    char rocket[5];           // New emoji
    char car[5];              // New emoji
    char dancer[5];           // New emoji
    char dog[5];              // New emoji
    char cat[5];              // New emoji
    char panda[5];            // New emoji
    char cactus[5];           // New emoji
    char bee[5];              // New emoji
    char earth_globe[5];      // New emoji
    char popcorn[5];          // New emoji
    char coffee[5];           // New emoji
    char pizza[5];            // New emoji
    char ice_cream[5];        // New emoji
    char hamburger[5];        // New emoji
    char sushi[5];            // New emoji
    char cake[5];             // New emoji
    char cocktail[5];         // New emoji
    char cookie[5];           // New emoji
    char candy[5];            // New emoji
    char glasses[5];          // New emoji
    char scissors[5];         // New emoji
    char microphone[5];       // New emoji
    char guitar[5];           // New emoji
} Emoji;

// Initialize all emoji strings
Emoji emoji = {
    "\xF0\x9F\x98\x86",  // smiley
    "\xF0\x9F\x98\xAD",  // crying
    "\xF0\x9F\xA4\xA3",  // lol
    "\xF0\x9F\x92\x80",  // skull
    "\xF0\x9F\xA4\x96",  // facepalm
    "\xF0\x9F\xA4\xAF",  // mind_blown
    "\xF0\x9F\x98\x81",  // frown
    "\xF0\x9F\x98\x8E",  // sunglass_smile
    "\xF0\x9F\xA4\x90",  // zipper_mouth
    "\xF0\x9F\xA4\xA4",  // drool_face
    "\xF0\x9F\x98\xB4",  // sleeping_face
    "\xF0\x9F\xA4\xAE",  // puke_face
    "\xF0\x9F\x98\xA1",  // angry_face
    "\xF0\x9F\xA4\xAC",  // bull_shit_face
    "\xF0\x9F\x92\xA9",  // poop_face
    "\xF0\x9F\x92\x96",  // heart
    "\xF0\x9F\x94\xA5",  // fire
    "\xF0\x9F\x91\x8D",  // thumbs_up
    "\xF0\x9F\x91\x8F",  // clap
    "\xF0\x9F\x8E\x89",  // party_face
    "\xF0\x9F\xA4\x94",  // thinking_face
    "\xF0\x9F\x98\x8D",  // heart_eyes
    "\xE2\x9C\x94",      // check_mark
    "\xF0\x9F\x98\x9E",  // sad_face
    "\xF0\x9F\x98\x89",  // winking_face
    "\xF0\x9F\x98\x8E",  // nerd_face
    "\xF0\x9F\x98\xB0",  // scream_face
    "\xF0\x9F\x98\x94",  // pensive_face
    "\xF0\x9F\x98\x8F",  // worried_face
    "\xF0\x9F\x98\x9B",  // face_with_stuck_out_tongue
    "\xF0\x9F\x98\x8C",  // relieved_face
    "\xF0\x9F\x98\x8E",  // smiling_face_with_halo
    "\xF0\x9F\x98\xA1",  // confounded_face
    "\xF0\x9F\x98\xA8",  // anguished_face
    "\xF0\x9F\x98\xB3",  // sleepy_face
    "\xF0\x9F\xA4\xA7",  // sneezing_face
    "\xF0\x9F\x8E\x89",  // party_popper
    "\xF0\x9F\x8C\x9F",  // rainbow
    "\xF0\x9F\x8C\x9E",  // sun
    "\xE2\x98\x81",      // cloud
    "\xE2\x9D\x84",      // snowflake
    "\xF0\x9F\x8F\x93",  // trophy
    "\xF0\x9F\x92\xA1",  // light_bulb
    "\xF0\x9F\x95\x93",  // alarm_clock
    "\xF0\x9F\x93\xA9",  // envelope
    "\xF0\x9F\xA6\x8A",  // balloon
    "\xF0\x9F\x8E\x87",  // gift
    "\xF0\x9F\x91\x8E",  // thumbs_down
    "\xF0\x9F\x9A\x80",  // rocket
    "\xF0\x9F\x9A\x97",  // car
    "\xF0\x9F\x8E\xB6",  // dancer
    "\xF0\x9F\x90\xB6",  // dog
    "\xF0\x9F\x90\xB8",  // cat
    "\xF0\x9F\x90\xB6",  // panda
    "\xF0\x9F\x8C\x80",  // cactus
    "\xF0\x9F\x90\xB0",  // bee
    "\xF0\x9F\x8C\x8D",  // earth_globe
    "\xF0\x9F\x8F\x8F",  // popcorn
    "\xF0\x9F\xCoffee",   // coffee
    "\xF0\x9F\x8D\x95",   // pizza
    "\xF0\x9F\x8D\xCA",   // ice_cream
    "\xF0\x9F\x8D\x6B",   // hamburger
    "\xF0\x9F\x8D\xB8",   // sushi
    "\xF0\x9F\x8C\xCA",   // cake
    "\xF0\x9F\x8C\x89",   // cocktail
    "\xF0\x9F\x8C\x9C",   // cookie
    "\xF0\x9F\x8C\x9A",   // candy
    "\xF0\x9F\x8C\x8F",   // glasses
    "\xF0\x9F\x9F\xA4",   // scissors
    "\xF0\x9F\x8F\x9F"    // microphone
};

// Function to print all emojis
void printEmojis(Emoji emoji) {
    printf("Emojis:\n");
    printf("Smiley: %s\n", emoji.smiley);
    printf("Crying: %s\n", emoji.crying);
    printf("LOL: %s\n", emoji.lol);
    printf("Skull: %s\n", emoji.skull);
    printf("Facepalm: %s\n", emoji.facepalm);
    printf("Mind Blown: %s\n", emoji.mind_blown);
    printf("Frown: %s\n", emoji.frown);
    printf("Sunglass Smile: %s\n", emoji.sunglass_smile);
    printf("Zipper Mouth: %s\n", emoji.zipper_mouth);
    printf("Drool Face: %s\n", emoji.drool_face);
    printf("Sleeping Face: %s\n", emoji.sleeping_face);
    printf("Puke Face: %s\n", emoji.puke_face);
    printf("Angry Face: %s\n", emoji.angry_face);
    printf("Bull Shit Face: %s\n", emoji.bull_shit_face);
    printf("Poop Face: %s\n", emoji.poop_face);
    printf("Heart: %s\n", emoji.heart);
    printf("Fire: %s\n", emoji.fire);
    printf("Thumbs Up: %s\n", emoji.thumbs_up);
    printf("Clap: %s\n", emoji.clap);
    printf("Party Face: %s\n", emoji.party_face);
    printf("Thinking Face: %s\n", emoji.thinking_face);
    printf("Heart Eyes: %s\n", emoji.heart_eyes);
    printf("Check Mark: %s\n", emoji.check_mark);
    printf("Sad Face: %s\n", emoji.sad_face);
    printf("Winking Face: %s\n", emoji.winking_face);
    printf("Nerd Face: %s\n", emoji.nerd_face);
    printf("Scream Face: %s\n", emoji.scream_face);
    printf("Pensive Face: %s\n", emoji.pensive_face);
    printf("Worried Face: %s\n", emoji.worried_face);
    printf("Face with Stuck Out Tongue: %s\n", emoji.face_with_stuck_out_tongue);
    printf("Relieved Face: %s\n", emoji.relieved_face);
    printf("Smiling Face with Halo: %s\n", emoji.smiling_face_with_halo);
    printf("Confounded Face: %s\n", emoji.confounded_face);
    printf("Anguished Face: %s\n", emoji.anguished_face);
    printf("Sleepy Face: %s\n", emoji.sleepy_face);
    printf("Sneezing Face: %s\n", emoji.sneezing_face);
    printf("Party Popper: %s\n", emoji.party_popper);
    printf("Rainbow: %s\n", emoji.rainbow);
    printf("Sun: %s\n", emoji.sun);
    printf("Cloud: %s\n", emoji.cloud);
    printf("Snowflake: %s\n", emoji.snowflake);
    printf("Trophy: %s\n", emoji.trophy);
    printf("Light Bulb: %s\n", emoji.light_bulb);
    printf("Alarm Clock: %s\n", emoji.alarm_clock);
    printf("Envelope: %s\n", emoji.envelope);
    printf("Balloon: %s\n", emoji.balloon);
    printf("Gift: %s\n", emoji.gift);
    printf("Thumbs Down: %s\n", emoji.thumbs_down);
    printf("Rocket: %s\n", emoji.rocket);
    printf("Car: %s\n", emoji.car);
    printf("Dancer: %s\n", emoji.dancer);
    printf("Dog: %s\n", emoji.dog);
    printf("Cat: %s\n", emoji.cat);
    printf("Panda: %s\n", emoji.panda);
    printf("Cactus: %s\n", emoji.cactus);
    printf("Bee: %s\n", emoji.bee);
    printf("Earth Globe: %s\n", emoji.earth_globe);
    printf("Popcorn: %s\n", emoji.popcorn);
    printf("Coffee: %s\n", emoji.coffee);
    printf("Pizza: %s\n", emoji.pizza);
    printf("Ice Cream: %s\n", emoji.ice_cream);
    printf("Hamburger: %s\n", emoji.hamburger);
    printf("Sushi: %s\n", emoji.sushi);
    printf("Cake: %s\n", emoji.cake);
    printf("Cocktail: %s\n", emoji.cocktail);
    printf("Cookie: %s\n", emoji.cookie);
    printf("Candy: %s\n", emoji.candy);
    printf("Glasses: %s\n", emoji.glasses);
    printf("Scissors: %s\n", emoji.scissors);
    printf("Microphone: %s\n", emoji.microphone);
    printf("Guitar: %s\n", emoji.guitar);
}

int main() {
    printEmojis(emoji);
    return 0;
}