/*
  ==============================================================================

    testSlider.h
    Created: 6 Nov 2023 3:06:49pm
    Author:  Martin Penberthy

  ==============================================================================
*/
#include <JuceHeader.h>
#include "testSliderLookAndFeel.h"

#pragma once
class testSlider : public juce::Slider
{
public:
    testSlider();
    ~testSlider();
    
    void mouseDown(const juce::MouseEvent& event) override;
    void mouseUp(const juce::MouseEvent& event) override;
    
private:
    testSliderLookAndFeel myTestSliderLookAndFeel;
    juce::Point<int> mousePosition;
    
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (testSlider)
};
