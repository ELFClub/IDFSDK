
Pod::Spec.new do |spec|

  spec.name         = "IDFSDK"
  spec.version      = "6.3.1.1"
  spec.summary      = "use IDFSDK."

  spec.description  = <<-DESC
                      a easy way to use ELSDK
                   DESC

  spec.license      = { :type => "MIT", :file => "LICENSE" }

  spec.author       = { "bruce" => "1064124945@qq.com" }

  spec.platform     = :ios, "9.0"



  spec.homepage     = "https://github.com/ELFClub/IDFSDK.git"
  spec.source       = { :git => "https://github.com/ELFClub/IDFSDK.git", :tag => spec.version.to_s }


  # ――― Source Code ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
  #


  spec.frameworks   = 'UIKit', 'Security', 'AdSupport'
  spec.libraries    = 'c++'

  spec.vendored_frameworks =  ['IDFSDK/Frameworks/IDFSDK.framework','IDFSDK/Frameworks/TapDB_iOS.framework']

  valid_archs     = ['armv7', 'x86_64', 'arm64']
  spec.xcconfig   = {
    'VALID_ARCHS' =>  valid_archs.join(' '),
  }
  
  spec.dependency 'FBSDKCoreKit','~> 8.2.0'
  spec.dependency 'FBSDKLoginKit','~> 8.2.0'

end
