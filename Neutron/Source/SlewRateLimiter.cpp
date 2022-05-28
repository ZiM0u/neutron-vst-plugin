/*
  ==============================================================================

    SlewRateLimiter.cpp
    Created: 28 May 2022 12:51:46am
    Author:  aurel

  ==============================================================================
*/

#include <JuceHeader.h>
#include "SlewRateLimiter.h"

//==============================================================================
SlewRateLimiter::SlewRateLimiter()
{
    // In your constructor, you should add any child components, and
    // initialise any special settings that your component needs.
    addAndMakeVisible(slewSlider);
    slewSlider.setSliderStyle(juce::Slider::Rotary);
    slewSlider.setTextBoxStyle(juce::Slider::NoTextBox, true, 0, 0);

    addAndMakeVisible(portaTimeSlider);
    portaTimeSlider.setSliderStyle(juce::Slider::Rotary);
    portaTimeSlider.setTextBoxStyle(juce::Slider::NoTextBox, true, 0, 0);
}

SlewRateLimiter::~SlewRateLimiter()
{
}

void SlewRateLimiter::paint (juce::Graphics& g)
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
    g.drawText ("SlewRateLimiter", getLocalBounds(),
                juce::Justification::centred, true);   // draw some placeholder text
}

void SlewRateLimiter::resized()
{
    // This method is where you should set the bounds of any child
    // components that your component contains..
    slewSlider.setBounds(5, 10, 65, 65);
    portaTimeSlider.setBounds(95, 10, 65, 65);

}
