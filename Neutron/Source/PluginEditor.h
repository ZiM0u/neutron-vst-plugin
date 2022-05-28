/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

#include "PluginProcessor.h"
#include "osc.h"
#include "Env.h"
#include "filter.h"
#include "Lfo.h"
#include "Overdrive.h"
#include "Delay.h"
#include "SH.h"
#include "SlewRateLimiter.h"
#include "Attenuator.h"
#include "matrix.h"

//==============================================================================
/**
*/
class NeutronAudioProcessorEditor  : public juce::AudioProcessorEditor
{
public:
    NeutronAudioProcessorEditor (NeutronAudioProcessor&);
    ~NeutronAudioProcessorEditor() override;

    //==============================================================================
    void paint (juce::Graphics&) override;
    void resized() override;

private:

    juce::File bgFile = juce::File("C:/Users/Desktop/lemon plugins/neutron0.1/NEUTRON_P0CM5_Top_XL - Copie.png");
    juce::Image background = juce::ImageCache::getFromFile(bgFile);

    //juce::Rectangle<float> dim = juce::Rectangle<float>(0,0,getWidth(),getHeight());
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    NeutronAudioProcessor& audioProcessor;

    osc oscillator1;
    osc oscillator2;

    Env enveloppe1;
    Env enveloppe2;

    filter filter1;

    Lfo lfo1;

    Overdrive overdrive1;

    Delay delay;

    SH sampleAndHold;
    SlewRateLimiter srl;
    Attenuator attenuators;
    matrix modularMatrix;

    //pluginEditor Sliders
    juce::Slider vcaBiasSlider;
    juce::Slider outputSlider;

    juce::MouseListener mListener;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (NeutronAudioProcessorEditor)
};
