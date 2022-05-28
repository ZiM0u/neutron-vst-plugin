/*
  ==============================================================================

    Overdrive.h
    Created: 28 May 2022 12:22:51am
    Author:  aurel

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

//==============================================================================
/*
*/
class Overdrive  : public juce::Component
{
public:
    Overdrive();
    ~Overdrive() override;

    void paint (juce::Graphics&) override;
    void resized() override;

private:
    juce::Slider driveSlider;
    juce::Slider toneSlider;
    juce::Slider levelSlider;
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (Overdrive)
};
