#pragma once

#include "pebble.h"

#define NUM_CLOCK_TICKS 11

// 時針、分針
#define HOUR_HAND_COLOR GColorWhite
#define MINUTE_HAND_COLOR GColorRichBrilliantLavender

// 0,3,6,9時刻マーカー
#define MARKER_MAIN_COLOR GColorRichBrilliantLavender
#define MARKER_MAIN_SIZE 2

// 0,3,6,9以外の時刻マーカー
#define MARKER_SUB_COLOR GColorWhite
#define MARKER_SUB_SIZE 1

static const struct GPathInfo ANALOG_BG_POINTS[] = {
  { 4, (GPoint []){
      {85, 0},
      {89, 1},
      {89, 13},
      {85, 13}
    }
  },
  { 4, (GPoint []){
      {90, 0},
      {94, 0},
      {94, 13},
      {90, 13}
    }
  },
  { 4, (GPoint []){
      {140, 11},
      {143, 13},
      {135, 25},
      {133, 23}
    }
  },
  { 4, (GPoint []){
      {165, 50},
      {180, 43},
      {180, 47},
      {169, 53}
    }
  },
  { 4, (GPoint []){
      {169, 126},
      {180, 132},
      {180, 135},
      {165, 129}
      }
  },
  { 4, (GPoint []){
      {135, 154},
      {143, 165},
      {140, 168},
      {133, 158}
      }
  },
  { 4, (GPoint []){
      {88, 166},
      {91, 166},
      {91, 179},
      {88, 179}
    }
  },
  { 4, (GPoint []){
      {40, 11},
      {38, 13},
      {45, 25},
      {48, 23}
    }
  },
  { 4, (GPoint []){
      {15, 50},
      {-1, 43},
      {-1, 47},
      {11, 53}
    }
  },
  { 4, (GPoint []){
      {11, 126},
      {-1, 132},
      {-1, 135},
      {15, 129}
    }
  },
  { 4, (GPoint []){
      {45, 154},
      {38, 165},
      {40, 168},
      {48, 158}
    }
  },

};

static const GPathInfo MARKER_0_POINTS = {
  4,  (GPoint []) {
    { 90 ,  3 },
    { 95 , 11 },
    { 90,  19 },
    { 85 , 11 }
  }
};

static const GPathInfo MINUTE_HAND_POINTS = {
  4,  (GPoint []) {
    { -6 , -16 },
    { 0 , -4 },
    { 6 , -16 },
    { 0 , -85 }
  }
};

static const GPathInfo HOUR_HAND_POINTS = {
  4, (GPoint []){
    { -6 , -16 },
    { 0 , -4 },
    { 6 , -16 },
    { 0 , -65 }
  }
};