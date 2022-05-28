/*
  ==============================================================================

    Delay.h
    Created: 28 May 2022 12:31:51am
    Author:  aurel

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

//==============================================================================
/*
*/
class Delay  : public juce::Component
{
public:
    Delay();
    ~Delay() override;

    void paint (juce::Graphics&) override;
    void resized() override;

private:
    juce::Slider timeSlider;
    juce::Slider repeatsSlider;
    juce::Slider mixSlider;
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (Delay)
};
