//created by Jason R. Pittman 10/19/24

#include <stdio.h>
#include <string.h>

// Define a struct to hold all emoji strings
struct Emoji {
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
};

// Initialize all emoji strings
struct Emoji emoji = {
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
    "\xF0\x9F\x92\xA9"   // poop_face
};

// Function to print all emojis
void print_all() {
    const char *emojis[] = {
        emoji.smiley, emoji.crying, emoji.lol, emoji.skull,
        emoji.facepalm, emoji.mind_blown, emoji.frown,
        emoji.sunglass_smile, emoji.zipper_mouth, emoji.drool_face,
        emoji.sleeping_face, emoji.puke_face, emoji.angry_face,
        emoji.bull_shit_face, emoji.poop_face
    };

    for (int i = 0; i < sizeof(emojis) / sizeof(emojis[0]); i++) {
        printf("%s\n", emojis[i]);
    }
}

int main() {
    print_all();
    return 0;
}