/*
  ==============================================================================

    Overdrive.cpp
    Created: 28 May 2022 12:22:51am
    Author:  aurel

  ==============================================================================
*/

#include <JuceHeader.h>
#include "Overdrive.h"

//==============================================================================
Overdrive::Overdrive()
{
    // In your constructor, you should add any child components, and
    // initialise any special settings that your component needs.
    addAndMakeVisible(driveSlider);
    driveSlider.setSliderStyle(juce::Slider::Rotary);
    driveSlider.setTextBoxStyle(juce::Slider::NoTextBox, true, 0, 0);

    addAndMakeVisible(toneSlider);
    toneSlider.setSliderStyle(juce::Slider::Rotary);
    toneSlider.setTextBoxStyle(juce::Slider::NoTextBox, true, 0, 0);

    addAndMakeVisible(levelSlider);
    levelSlider.setSliderStyle(juce::Slider::Rotary);
    levelSlider.setTextBoxStyle(juce::Slider::NoTextBox, true, 0, 0);

}

Overdrive::~Overdrive()
{
}

void Overdrive::paint (juce::Graphics& g)
{
    /* This demo code just fills the component's background and
       draws some placeholder text to get you started.

       You should replace everything in this method with your own
       drawing code..
    */

    //g.fillAll (getLookAndFeel().findColour (juce::ResizableWindow::backgroundColourId));   // clear the background

    g.setColour (juce::Colours::grey);
    g.drawRect (getLocalBounds(), 1);   // draw an outline around the component

    g.setColour (juce::Colours::white);
    g.setFont (14.0f);
    g.drawText ("Overdrive", getLocalBounds(),
                juce::Justification::centred, true);   // draw some placeholder text
}

void Overdrive::resized()
{
    // This method is where you should set the bounds of any child
    // components that your component contains..
    driveSlider.setBounds(10, 6, 65, 65);
    toneSlider.setBounds(100, 6, 65, 65);
    levelSlider.setBounds(190, 6, 65, 65);

}
