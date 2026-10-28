#
# Be sure to run `pod lib lint K7M4QX2ZNP.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'K7M4QX2ZNP'
  s.version          = '5.4.0'
  s.summary          = 'sdk K7M4QX2ZNP.'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
TODO: Add long description of the pod here.
                       DESC

  s.homepage         = 'https://github.com/hzsxwl/K7M4QX2ZNP'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { '3318596470@qq.com' => '3318596470@qq.com' }
  s.source           = { :git => 'https://github.com/hzsxwl/K7M4QX2ZNP.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '11.0'

  s.source_files = 'K7M4QX2ZNP/Classes/**/*'
  s.public_header_files = ['K7M4QX2ZNP/Classes/**/NyxAdsHub.h', 'K7M4QX2ZNP/Classes/**/NyxAdBrief.h', 'K7M4QX2ZNP/Classes/**/NyxOpenerAd.h', 'K7M4QX2ZNP/Classes/**/NyxMidrollAd.h', 'K7M4QX2ZNP/Classes/**/NyxBonusAd.h', 'K7M4QX2ZNP/Classes/**/NyxSdkRuntime.h', 'K7M4QX2ZNP/Classes/**/NyxStripAd.h', 'K7M4QX2ZNP/Classes/**/NyxFeedRenderer.h', 'K7M4QX2ZNP/Classes/**/NyxFeedItem.h', 'K7M4QX2ZNP/Classes/**/NyxFeedLoader.h']
  s.vendored_libraries = 'K7M4QX2ZNP/Libraries/libK7M4QX2ZNP-iOS.a'

  s.frameworks = "Foundation","UIKit","MobileCoreServices","CoreGraphics","Security","SystemConfiguration","CoreTelephony","AdSupport","CoreData","StoreKit","AVFoundation","MediaPlayer","CoreMedia","WebKit","Accelerate","CoreLocation","AVKit","MessageUI","QuickLook","AudioToolBox","JavaScriptCore","CoreMotion","Photos"
  s.libraries = "z","resolv.9","sqlite3","c++","c++abi"
  s.dependency 'ToBid-iOS/GDTAdapter','5.5.3'
  s.dependency 'ToBid-iOS/AdScopeAdapter','5.5.3'
  s.static_framework = true
end
