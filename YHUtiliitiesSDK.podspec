
Pod::Spec.new do |s|

  s.name         = "YHUtiliitiesSDK"
  s.version      = "0.0.2"
  s.summary      = "YHUtiliitiesSDK is a utiliities sdk"

  s.description  = "YHUtiliitiesSDK"

  s.homepage     = "https://github.com/XmYlzYhkj/YHUtiliitiesSDK"

  s.license      = "MIT"

  s.author       = { "XmYhkj" => "yhkj_xm@163.com" }
  s.platform     = :ios, "8.1"

  s.source       = { :git => "https://github.com/XmYlzYhkj/YHUtiliitiesSDK.git", :tag => "0.0.2" }

  #s.source_files  = "Classes", "Classes/*"

  s.requires_arc = true

  s.vendored_frameworks = ["Classes/YHUtiliitiesSDK.framework"]
  
end
