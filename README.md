<p>
  Freeswitch TTS module, provides a simple frontend for <a href="https://github.com/rhasspy/piper" target="_blank">piper</a>.<br>
</p>

### Usage example
```XML
<extension name="tts-test">
    <condition field="destination_number" expression="^(3333)$">
        <action application="answer"/>
        <action application="speak" data="piper|en|Hello world!"/>
        <action application="sleep" data="1000"/>
        <action application="hangup"/>
    </condition>
</extension>

```
