/*
  ==============================================================================

    SlewRateLimiter.h
    Created: 28 May 2022 12:51:46am
    Author:  aurel

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

//==============================================================================
/*
*/
class SlewRateLimiter  : public juce::Component
{
public:
    SlewRateLimiter();
    ~SlewRateLimiter() override;

    void paint (juce::Graphics&) override;
    void resized() override;

private:
    juce::Slider slewSlider;
    juce::Slider portaTimeSlider;
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (SlewRateLimiter)
};
