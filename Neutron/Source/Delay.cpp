/*
  ==============================================================================

    Delay.cpp
    Created: 28 May 2022 12:31:51am
    Author:  aurel

  ==============================================================================
*/

#include <JuceHeader.h>
#include "Delay.h"

//==============================================================================
Delay::Delay()
{
    // In your constructor, you should add any child components, and
    // initialise any special settings that your component needs.
    addAndMakeVisible(timeSlider);
    timeSlider.setSliderStyle(juce::Slider::Rotary);
    timeSlider.setTextBoxStyle(juce::Slider::NoTextBox, true, 0, 0);

    addAndMakeVisible(repeatsSlider);
    repeatsSlider.setSliderStyle(juce::Slider::Rotary);
    repeatsSlider.setTextBoxStyle(juce::Slider::NoTextBox, true, 0, 0);

    addAndMakeVisible(mixSlider);
    mixSlider.setSliderStyle(juce::Slider::Rotary);
    mixSlider.setTextBoxStyle(juce::Slider::NoTextBox, true, 0, 0);
}


Delay::~Delay()
{
}

void Delay::paint (juce::Graphics& g)
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
    g.drawText ("Delay", getLocalBounds(),
                juce::Justification::centred, true);   // draw some placeholder text
}

void Delay::resized()
{
    // This method is where you should set the bounds of any child
    // components that your component contains..
    timeSlider.setBounds(10, 30, 65, 65);
    repeatsSlider.setBounds(100, 30, 65, 65);
    mixSlider.setBounds(190, 30, 65, 65);
}
