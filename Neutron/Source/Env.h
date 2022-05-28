/*
  ==============================================================================

    Env.h
    Created: 27 May 2022 11:44:12pm
    Author:  aurel

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

//==============================================================================
/*
*/
class Env  : public juce::Component
{
public:
    Env();
    ~Env() override;

    void paint (juce::Graphics&) override;
    void resized() override;

private:
    juce::Slider attackSlider;
    juce::Slider decaySlider;
    juce::Slider sustainSlider;
    juce::Slider releaseSlider;
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (Env)
};
