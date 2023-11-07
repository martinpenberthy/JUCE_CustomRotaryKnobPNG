/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"

//==============================================================================
PngGUITestAudioProcessorEditor::PngGUITestAudioProcessorEditor (PngGUITestAudioProcessor& p)
    : AudioProcessorEditor (&p), audioProcessor (p)
{
    // Make sure that before the constructor has finished, you've set the
    // editor's size to whatever you need it to be.
    setSize (400, 300);
    
    addAndMakeVisible(sliderTest);
}

PngGUITestAudioProcessorEditor::~PngGUITestAudioProcessorEditor()
{
}

//==============================================================================
void PngGUITestAudioProcessorEditor::paint (juce::Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    g.fillAll (getLookAndFeel().findColour (juce::ResizableWindow::backgroundColourId));


}

void PngGUITestAudioProcessorEditor::resized()
{
    // This is generally where you'll want to lay out the positions of any
    // subcomponents in your editor..
    
    sliderTest.setBounds(100, 0, 300, 300);
    sliderTest.setSliderStyle(juce::Slider::SliderStyle::RotaryVerticalDrag);
    sliderTest.setTextBoxStyle(juce::Slider::TextBoxBelow, false, 45, 20);
    sliderTest.setTextValueSuffix(" s");
    sliderTest.setNumDecimalPlacesToDisplay(0);
    sliderTest.setTextBoxIsEditable(false);
    sliderTest.setRange(0.001, 5.0, 0.01);
}
