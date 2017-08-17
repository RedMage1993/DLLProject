There's a pretty good <a href="https://msdn.microsoft.com/en-us/library/ms235636.aspx">walkthrough</a> available for creating a DLL with Visual C++ on MSDN. I used to do this when I needed the performance of C++ in my .NET applications, and also to reduce download costs for anyone using my stuff.

Compile with Visual Studio 2015, or upgrade the project in newer versions if necessary.

Don't mind the poor naming in the source code. All this does is create a singleton and confirm that the driver is able to use that via the DLL.
