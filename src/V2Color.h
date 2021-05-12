// © Kay Sievers <kay@vrfy.org>, 2020-2021
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include <Arduino.h>

namespace V2Color {
enum Hue {
  Red     = 0,
  Orange  = 30,
  Yellow  = 60,
  Green   = 120,
  Cyan    = 180,
  Blue    = 240,
  Magenta = 300,
};

// CIE 1931 - psychometric lightness / human color vision
uint8_t toCIE1931(uint8_t v);

// Hue, Saturation, Value
void HSVtoRGB(float h, float s, float v, uint8_t &r, uint8_t &g, uint8_t &b);
};
