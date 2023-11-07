/*
  ==============================================================================

    testSliderLookAndFeel.h
    Created: 6 Nov 2023 3:11:49pm
    Author:  Martin Penberthy

  ==============================================================================
*/

#pragma once
#include <JuceHeader.h>

class testSliderLookAndFeel : public juce::LookAndFeel_V4
{
public:
    testSliderLookAndFeel();

    void drawRotarySlider(juce::Graphics& g, int x, int y, int width, int height, float sliderPos, float rotaryStartAngle, float rotaryEndAngle, juce::Slider& slider) override;

private:
   juce::Image testKnob;
};
