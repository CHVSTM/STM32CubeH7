/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef BATHROOMSCREEN_VIEW_BASE_HPP
#define BATHROOMSCREEN_VIEW_BASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/bathroomscreen_screen/BathroomScreenPresenter.hpp>
#include <touchgfx/widgets/Image.hpp>
#include <touchgfx/widgets/Button.hpp>
#include <gui/containers/FpsMcuLoad.hpp>
#include <touchgfx/mixins/ClickListener.hpp>
#include <touchgfx/EasingEquations.hpp>
#include <touchgfx/mixins/FadeAnimator.hpp>

class BathroomScreenViewBase : public touchgfx::View<BathroomScreenPresenter>
{
public:
    BathroomScreenViewBase();
    virtual ~BathroomScreenViewBase() {}

    virtual void setupScreen();
    virtual void afterTransition();

    /*
     * Custom Action Handlers
     */
    virtual void startGlowAnimaton()
    {
        // Override and implement this function in BathroomScreenView
    }

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::ClickListener< touchgfx::Image > background;
    touchgfx::Button buttonBack;
    touchgfx::Image imageBathtubUI;
    touchgfx::FadeAnimator< touchgfx::Button > buttonBathtub;
    touchgfx::FadeAnimator< touchgfx::Button > buttonWasher;
    touchgfx::FadeAnimator< touchgfx::Button > buttonHomeControl;
    touchgfx::Image imageBathtubWater;
    touchgfx::Image imageWasherActive;
    touchgfx::Image imageHomeUI;
    touchgfx::Image imageWasherUI;
    FpsMcuLoad mcuLoad;

private:

    /*
     * Callback Handler Declarations
     */
    void buttonCallbackHandler(const touchgfx::AbstractButton& src);

    /*
     * Callback Declarations
     */
    touchgfx::Callback<BathroomScreenViewBase, const touchgfx::AbstractButton&> buttonCallback;

};

#endif // BATHROOMSCREEN_VIEW_BASE_HPP