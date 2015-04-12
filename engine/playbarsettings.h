// This file is generated by kconfig_compiler from playbar.kcfg.
// All changes you do to this file will be lost.
#ifndef PLAYBARSETTINGS_H
#define PLAYBARSETTINGS_H

#include <kconfigskeleton.h>
#include <kdebug.h>

class PlayBarSettings : public KConfigSkeleton
{
  public:

    static PlayBarSettings *self();
    ~PlayBarSettings();

    /**
      Set Show stop button
    */
    static
    void setShowStop( bool v )
    {
      if (!self()->isImmutable( QString::fromLatin1( "ShowStop" ) ))
        self()->mShowStop = v;
    }

    /**
      Get Show stop button
    */
    static
    bool showStop()
    {
      return self()->mShowStop;
    }

    /**
      Set Controls on bar
    */
    static
    void setControlsOnBar( bool v )
    {
      if (!self()->isImmutable( QString::fromLatin1( "ControlsOnBar" ) ))
        self()->mControlsOnBar = v;
    }

    /**
      Get Controls on bar
    */
    static
    bool controlsOnBar()
    {
      return self()->mControlsOnBar;
    }

    /**
      Set Buttons appearance
    */
    static
    void setButtonsAppearance( int v )
    {
      if (!self()->isImmutable( QString::fromLatin1( "ButtonsAppearance" ) ))
        self()->mButtonsAppearance = v;
    }

    /**
      Get Buttons appearance
    */
    static
    int buttonsAppearance()
    {
      return self()->mButtonsAppearance;
    }

    /**
      Set Background
    */
    static
    void setBackground( int v )
    {
      if (!self()->isImmutable( QString::fromLatin1( "Background" ) ))
        self()->mBackground = v;
    }

    /**
      Get Background
    */
    static
    int background()
    {
      return self()->mBackground;
    }

  protected:
    PlayBarSettings();
    friend class PlayBarSettingsHelper;


    // General
    bool mShowStop;
    bool mControlsOnBar;
    int mButtonsAppearance;
    int mBackground;

  private:
};

#endif

