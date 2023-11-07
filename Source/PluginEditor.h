/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"
#include "testSlider.h"

//==============================================================================
/**
*/
class PngGUITestAudioProcessorEditor  : public juce::AudioProcessorEditor
{
public:
    PngGUITestAudioProcessorEditor (PngGUITestAudioProcessor&);
    ~PngGUITestAudioProcessorEditor() override;

    //==============================================================================
    void paint (juce::Graphics&) override;
    void resized() override;

private:
    testSlider sliderTest;
    
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    PngGUITestAudioProcessor& audioProcessor;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (PngGUITestAudioProcessorEditor)
};
