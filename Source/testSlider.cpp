/*
  ==============================================================================

    testSlider.cpp
    Created: 6 Nov 2023 3:06:49pm
    Author:  Martin Penberthy

  ==============================================================================
*/
#pragma once
#include "testSlider.h"

#include <JuceHeader.h>


//==============================================================================
testSlider::testSlider() : juce::Slider()
{
    // In your constructor, you should add any child components, and
    // initialise any special settings that your component needs.
    setLookAndFeel(&myTestSliderLookAndFeel);
}

testSlider::~testSlider()
{
    setLookAndFeel(nullptr);
}

void testSlider::mouseDown(const juce::MouseEvent& event)
{
    juce::Slider::mouseDown(event);
    setMouseCursor(juce::MouseCursor::NoCursor);
    mousePosition = juce::Desktop::getMousePosition();
}

void testSlider::mouseUp(const juce::MouseEvent& event)
{
    Slider::mouseUp(event);
    juce::Desktop::setMousePosition(mousePosition);
    setMouseCursor(juce::MouseCursor::NormalCursor);
}

