/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"


//==============================================================================
NeutronAudioProcessorEditor::NeutronAudioProcessorEditor (NeutronAudioProcessor& p)
    : AudioProcessorEditor (&p), audioProcessor (p)
{
    // Make sure that before the constructor has finished, you've set the
    // editor's size to whatever you need it to be.

    //juce::Component childs[7][8] = [[oscillator1,oscillator2,]]


    setSize (1442, 482);

    addAndMakeVisible(oscillator1);
    addAndMakeVisible(oscillator2);
    addAndMakeVisible(enveloppe1);
    addAndMakeVisible(enveloppe2);

    addAndMakeVisible(filter1);

    addAndMakeVisible(lfo1);

    addAndMakeVisible(overdrive1);

    addAndMakeVisible(delay);

    addAndMakeVisible(sampleAndHold);

    addAndMakeVisible(srl);

    addAndMakeVisible(attenuators);

    //mainSlider
    vcaBiasSlider.setTextBoxStyle(juce::Slider::NoTextBox, true, 0, 0);
    outputSlider.setTextBoxStyle(juce::Slider::NoTextBox, true, 0, 0);
    outputSlider.setSliderStyle(juce::Slider::Rotary);
    vcaBiasSlider.setSliderStyle(juce::Slider::Rotary);

    addAndMakeVisible(vcaBiasSlider);
    addAndMakeVisible(outputSlider);

    addAndMakeVisible(modularMatrix);

    modularMatrix.addMouseListener(&mListener,true);
}

NeutronAudioProcessorEditor::~NeutronAudioProcessorEditor()
{
}

//==============================================================================
void NeutronAudioProcessorEditor::paint (juce::Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    //g.fillAll (getLookAndFeel().findColour (juce::ResizableWindow::backgroundColourId));
    juce::Image bg = juce::ImageCache::getFromMemory(BinaryData::background2_png, BinaryData::background2_pngSize);
    g.drawImageAt(bg, 0, 0);
    //g.setColour (juce::Colours::white);
    //g.setFont (15.0f);
    //g.drawFittedText ("Hello World!", getLocalBounds(), juce::Justification::centred, 1);
}

void NeutronAudioProcessorEditor::resized()
{
    // This is generally where you'll want to lay out the positions of any
    // subcomponents in your editor..
    oscillator1.setBounds(10, 100, 170, 350);
    oscillator2.setBounds(183, 100, 170, 350);
    enveloppe1.setBounds(546, 260, 350, 90);
    enveloppe2.setBounds(546, 365, 350, 90);
    filter1.setBounds(365, 20, 85, 440);
    lfo1.setBounds(455, 20,176, 230);
    overdrive1.setBounds(635, 148, 265, 100);
    delay.setBounds(635, 20, 265, 120);
    sampleAndHold.setBounds(910, 148, 170, 100);
    srl.setBounds(910, 252, 170, 100);
    attenuators.setBounds(910, 356, 170, 100);
    outputSlider.setBounds(915, 50, 65, 65);
    vcaBiasSlider.setBounds(464, 367, 65, 65);
    modularMatrix.setBounds(1080, 50, 350, 387);
}
